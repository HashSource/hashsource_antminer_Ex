FILE *__fastcall sub_2B4F0(const char *a1)
{
  FILE *v2; // r5
  char *v3; // r6
  char *v4; // r7
  size_t i; // r4
  const unsigned __int16 **v6; // r0
  int v7; // t1
  const char *v8; // r1
  size_t v9; // r2
  char v11[32]; // [sp+0h] [bp-160h] BYREF
  char command[64]; // [sp+20h] [bp-140h] BYREF
  char s[256]; // [sp+60h] [bp-100h] BYREF

  memset(s, 0, sizeof(s));
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", a1);
  v2 = popen(command, "r");
  if ( v2 )
  {
    do
      v3 = fgets(s, 256, v2);
    while ( v3 );
    v4 = s;
    pclose(v2);
    v2 = 0;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(v11, 0, sizeof(v11));
      v6 = _ctype_b_loc();
      v7 = (unsigned __int8)*v4++;
      if ( ((*v6)[v7] & 0x2000) != 0 )
      {
        v8 = &s[(_DWORD)v3];
        v9 = i - (_DWORD)v3 - 1;
        v3 = (char *)i;
        strncpy(v11, v8, v9);
        if ( strtol(v11, 0, 10) <= 0 )
          v3 = (char *)i;
        else
          v2 = (FILE *)((char *)v2 + 1);
      }
    }
    if ( v2 )
      printf("%d instance of %s is already Running on this machine", v2, a1);
  }
  return v2;
}
