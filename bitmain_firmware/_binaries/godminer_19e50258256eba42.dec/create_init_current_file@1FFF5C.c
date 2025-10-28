int create_init_current_file()
{
  size_t v1; // r0
  size_t v2; // r0
  char src[80]; // [sp+8h] [bp-16Ch] BYREF
  char filename[80]; // [sp+58h] [bp-11Ch] BYREF
  time_t timer; // [sp+A8h] [bp-CCh] BYREF
  char v7[80]; // [sp+ACh] [bp-C8h] BYREF
  char old[80]; // [sp+FCh] [bp-78h] BYREF
  FILE *v9; // [sp+14Ch] [bp-28h]
  FILE *stream; // [sp+150h] [bp-24h]
  struct tm *tp; // [sp+154h] [bp-20h]
  struct dirent *v12; // [sp+158h] [bp-1Ch]
  DIR *dirp; // [sp+15Ch] [bp-18h]
  char *s; // [sp+160h] [bp-14h]
  char *name; // [sp+164h] [bp-10h]

  name = "/nvdata";
  s = "current_";
  dirp = opendir("/nvdata");
  if ( dirp )
  {
    while ( 1 )
    {
      v12 = readdir(dirp);
      if ( !v12 )
        break;
      v1 = strlen(s);
      if ( !strncmp(s, v12->d_name, v1) )
      {
        snprintf(old, 0x50u, "%s/%s", name, v12->d_name);
        v2 = strlen(s);
        snprintf(v7, 0x50u, "%s/%s", name, &v12->d_name[v2]);
        printf("Renaming '%s' to '%s'\n", old, v7);
        if ( rename(old, v7) == -1 )
        {
          perror("Error renaming file");
          closedir(dirp);
          return 1;
        }
      }
    }
    closedir(dirp);
    timer = time(0);
    tp = localtime(&timer);
    strftime(filename, 0x50u, "/nvdata/current_repair_code%Y%m%d-%H%M%S.txt", tp);
    strftime(src, 0x50u, "/nvdata/current_fail_bank%Y%m%d-%H%M%S.txt", tp);
    stream = fopen(filename, "w");
    v9 = fopen(src, "w");
    if ( stream && v9 )
    {
      fclose(stream);
      fclose(v9);
      printf("File '%s' created.\n", filename);
      printf("File '%s' created.\n", src);
      memcpy(current_file_repair_code, filename, 0x50u);
      memcpy(current_file_fail_map, src, 0x50u);
      return 0;
    }
    else
    {
      perror("Unable to create file");
      return 1;
    }
  }
  else
  {
    perror("Error opening directory");
    return 1;
  }
}
