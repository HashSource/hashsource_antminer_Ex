void __fastcall parse_config(_DWORD *a1)
{
  int v1; // s0
  int v2; // s1
  char **v3; // r4
  char *v4; // r9
  char *v6; // r10
  _DWORD *v7; // r8
  int v8; // r3
  int v9; // r1
  char *v10; // t1
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  int v13; // r3
  const char *v14; // r0
  char *v15; // r5
  int v16; // r0
  const char *v17; // r1
  const char *v18; // r1
  int v19; // r11
  unsigned int i; // r10
  _DWORD *v21; // r0
  int v22; // r1
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v6) = -3376;
  v3 = &off_12E8F4;
  LOWORD(v4) = 10680;
  LOWORD(v7) = -14512;
  HIWORD(v6) = (unsigned int)"num" >> 16;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  while ( 1 )
  {
    v11 = (_DWORD *)json_object_get(a1, v6);
    v12 = v11;
    if ( !v11 )
      goto LABEL_7;
    v13 = *v11;
    if ( v3[1] )
      break;
    if ( v13 != 5 )
      goto LABEL_7;
    HIWORD(v4) = (unsigned int)" decode failed(%d): %s" >> 16;
    parse_arg((int)v3[3], v4);
    if ( v3 == (char **)&unk_12EA04 )
      return;
LABEL_8:
    v10 = v3[4];
    v3 += 4;
    v6 = v10;
    if ( !v10 )
      return;
  }
  if ( v13 != 2 )
  {
    switch ( v13 )
    {
      case 3:
        v16 = json_integer_value((int)v11);
        LOWORD(v17) = -7616;
        HIWORD(v17) = (unsigned int)"d_time" >> 16;
        sprintf(s, v17, v16);
        parse_arg((int)v3[3], s);
        break;
      case 4:
        json_real_value();
        LOWORD(v18) = 19860;
        HIWORD(v18) = (unsigned int)"ot send its capabilities at the beginning of the setup process! Instead, it sent the command: %s" >> 16;
        sprintf(s, v18, v1, v2);
        parse_arg((int)v3[3], s);
        break;
      case 1:
        LOWORD(v19) = -3368;
        for ( i = 0; (unsigned int)json_array_size(v12) > i; ++i )
        {
          v21 = json_array_get(v12, i);
          if ( !v21 )
            break;
          if ( *v21 )
          {
            V_LOCK();
            HIWORD(v19) = (unsigned int)"hipreg" >> 16;
            logfmt_raw(s, 0x1000u, 0, v19, *v3);
            V_UNLOCK();
            LOWORD(v22) = -4392;
            HIWORD(v22) = (unsigned int)"ares / min): %.2f/min" >> 16;
            zlog(*v7, v22, 132, "parse_config", 12, 576, 100, s);
          }
          else
          {
            parse_config(v21);
          }
        }
        break;
      default:
        V_LOCK();
        LOWORD(v8) = -3340;
        HIWORD(v8) = (unsigned int)"orereg" >> 16;
        logfmt_raw(s, 0x1000u, 0, v8, v6);
        V_UNLOCK();
        LOWORD(v9) = -4392;
        HIWORD(v9) = (unsigned int)"ares / min): %.2f/min" >> 16;
        zlog(*v7, v9, 132, "parse_config", 12, 584, 100, s);
        break;
    }
LABEL_7:
    if ( v3 == (char **)&unk_12EA04 )
      return;
    goto LABEL_8;
  }
  v14 = (const char *)json_string_value(v11);
  v15 = _strdup(v14);
  if ( v15 )
  {
    parse_arg((int)v3[3], v15);
    free(v15);
    goto LABEL_7;
  }
}
