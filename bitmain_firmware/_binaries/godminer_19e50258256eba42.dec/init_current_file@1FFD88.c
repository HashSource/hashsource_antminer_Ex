int init_current_file()
{
  char src[9]; // [sp+0h] [bp-1Ch] BYREF
  struct dirent *v3; // [sp+Ch] [bp-10h]
  DIR *dirp; // [sp+10h] [bp-Ch]
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  strcpy(src, "/nvdata/");
  dirp = opendir("/nvdata");
  if ( dirp )
  {
    while ( 1 )
    {
      v3 = readdir(dirp);
      if ( !v3 || v5 > 1 )
        break;
      if ( !strncmp(v3->d_name, "current_repair", 0xEu) )
      {
        strncpy(current_file_repair_code, v3->d_name, 0x50u);
        memmove(&unk_C28D1C, current_file_repair_code, 0x48u);
        memcpy(current_file_repair_code, src, sizeof(current_file_repair_code));
        byte_C28D63 = 0;
        ++v5;
        printf("%s enter\n", current_file_repair_code);
      }
      if ( !strncmp(v3->d_name, "current_fail", 0xCu) )
      {
        strncpy(current_file_fail_map, v3->d_name, 0x50u);
        memmove(&unk_C28D6C, current_file_fail_map, 0x48u);
        memcpy(current_file_fail_map, src, sizeof(current_file_fail_map));
        byte_C28DB3 = 0;
        ++v5;
      }
    }
    closedir(dirp);
    return v5;
  }
  else
  {
    perror("Unable to open directory");
    return -1;
  }
}
