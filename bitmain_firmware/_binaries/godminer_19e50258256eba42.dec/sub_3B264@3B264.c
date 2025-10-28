int __fastcall sub_3B264(const char *a1)
{
  char dest[32]; // [sp+8h] [bp-17Ch] BYREF
  char command[64]; // [sp+28h] [bp-15Ch] BYREF
  char s[256]; // [sp+68h] [bp-11Ch] BYREF
  int v6; // [sp+168h] [bp-1Ch]
  size_t n; // [sp+16Ch] [bp-18h]
  FILE *stream; // [sp+170h] [bp-14h]
  size_t i; // [sp+174h] [bp-10h]
  size_t v10; // [sp+178h] [bp-Ch]
  int v11; // [sp+17Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  v11 = 0;
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", a1);
  stream = popen(command, "r");
  if ( stream )
  {
    while ( fgets(s, 256, stream) )
      ;
    pclose(stream);
    stream = 0;
    v10 = 0;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      if ( ((*_ctype_b_loc())[(unsigned __int8)s[i - 1]] & 0x2000) != 0 )
      {
        n = i - v10 - 1;
        strncpy(dest, &s[v10], n);
        v10 = i;
        v6 = atoi(dest);
        if ( v6 > 0 )
          ++v11;
      }
    }
  }
  if ( v11 > 0 )
    printf("%d instance of %s is already Running on this machine", v11, a1);
  return v11;
}
