int __fastcall pic1704_update_app_program(int a1)
{
  int v2; // r1
  int v3; // r0
  FILE *v4; // r6
  char *v5; // r10
  char *v6; // r5
  unsigned int v7; // r0
  int v8; // r9
  int v9; // r7
  const char *v10; // r2
  _DWORD *v11; // r3
  int v12; // r2
  char *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  const char *v18; // r2
  int v19; // r1
  const char *v21; // r2
  const char *v22; // r2
  const char *v23; // r2
  _DWORD *v24; // r3
  int v25; // r2
  int v26; // r1
  const char *v27; // r2
  unsigned __int8 v28[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v30; // [sp+20h] [bp-1814h] BYREF
  int v31; // [sp+24h] [bp-1810h]
  int v32; // [sp+28h] [bp-180Ch]
  int v33; // [sp+2Ch] [bp-1808h]
  int v34[512]; // [sp+30h] [bp-1804h] BYREF
  char v35[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v36; // [sp+844h] [bp-FF0h]

  LOWORD(v2) = 30608;
  LOWORD(v3) = -11084;
  HIWORD(v2) = (unsigned int)"not reach pool" >> 16;
  HIWORD(v3) = (unsigned int)"work count %02x" >> 16;
  *(_DWORD *)s = 0;
  v30 = 0;
  *(_DWORD *)&s[3] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v4 = (FILE *)fopen64(v3, v2);
  if ( !v4 )
  {
    LOWORD(v27) = -11044;
    HIWORD(v27) = (unsigned int)"%02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x" >> 16;
    snprintf((char *)v34, 0x800u, v27, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, v34);
    V_UNLOCK();
    LOWORD(v24) = -14512;
    v8 = -1;
    HIWORD(v24) = (unsigned int)&unk_16B55C >> 16;
    v25 = 274;
    goto LABEL_19;
  }
  v5 = (char *)calloc(0x3700u, 1u);
  if ( !v5 )
  {
    LOWORD(v23) = -10988;
    HIWORD(v23) = (unsigned int)"ulate diff %02x, but ans diff %02x (bit5 is 1)" >> 16;
    snprintf((char *)v34, 0x800u, v23, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, v34);
    V_UNLOCK();
    LOWORD(v24) = -14512;
    v8 = -1;
    HIWORD(v24) = (unsigned int)&unk_16B55C >> 16;
    v25 = 281;
LABEL_19:
    LOWORD(v26) = -11356;
    HIWORD(v26) = (unsigned int)&unk_13C6D4 >> 16;
    zlog(*v24, v26, 158, "pic1704_update_app_program", 26, v25, 20, v35);
    return v8;
  }
  v6 = v5;
  fseek(v4, 0, 0);
  do
  {
    v6 += 4;
    fgets(s, 7, v4);
    v7 = strtoul(s, 0, 16);
    *(v6 - 1) = v7;
    *(v6 - 4) = HIBYTE(v7);
    *(v6 - 3) = BYTE2(v7);
    *(v6 - 2) = BYTE1(v7);
  }
  while ( v6 != v5 + 14080 );
  fclose(v4);
  v8 = pic1704_reset(a1);
  if ( v8 )
  {
    v8 = pic1704_erase_program(a1);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v13 = &v5[16 * v9];
        v34[1] = (int)&v30;
        v14 = *(_DWORD *)v13;
        v15 = *((_DWORD *)v13 + 1);
        v16 = *((_DWORD *)v13 + 2);
        v17 = *((_DWORD *)v13 + 3);
        ++v9;
        HIBYTE(v34[0]) = a1;
        LOWORD(v34[0]) = 4098;
        v30 = v14;
        v31 = v15;
        v32 = v16;
        v33 = v17;
        BYTE2(v34[0]) = 2;
        v28[1] = 0;
        memset(v35, 0, sizeof(v35));
        v36 = 0;
        v28[0] = -1;
        if ( !sub_AC484(v34[0], (int)&v30, (int)v35, v28) )
        {
          LOWORD(v18) = -10896;
          HIWORD(v18) = (unsigned int)"" >> 16;
          v8 = 0;
          snprintf((char *)v34, 0x800u, v18, "pic1704_update_app_program", a1);
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, v34);
          V_UNLOCK();
          LOWORD(v11) = -14512;
          HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
          v12 = 335;
          goto LABEL_12;
        }
      }
      while ( v9 != 880 );
      v8 = pic1704_reset(a1);
      if ( v8 )
      {
        v8 = 1;
        free(v5);
        return v8;
      }
      LOWORD(v22) = -10856;
      HIWORD(v22) = (unsigned int)"alue %04x expected value %04x\n" >> 16;
      snprintf((char *)v34, 0x800u, v22, "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, v34);
      V_UNLOCK();
      LOWORD(v11) = -14512;
      HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
      v12 = 345;
    }
    else
    {
      LOWORD(v10) = -10928;
      HIWORD(v10) = (unsigned int)"ch, calculate %02x ans diff %02x" >> 16;
      snprintf((char *)v34, 0x800u, v10, "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, v34);
      V_UNLOCK();
      LOWORD(v11) = -14512;
      HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
      v12 = 315;
    }
  }
  else
  {
    LOWORD(v21) = -10960;
    HIWORD(v21) = (unsigned int)"f %02x (bit5 is 1)" >> 16;
    snprintf((char *)v34, 0x800u, v21, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, v34);
    V_UNLOCK();
    LOWORD(v11) = -14512;
    HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
    v12 = 306;
  }
LABEL_12:
  LOWORD(v19) = -11356;
  HIWORD(v19) = (unsigned int)&unk_13C6D4 >> 16;
  zlog(*v11, v19, 158, "pic1704_update_app_program", 26, v12, 20, v35);
  free(v5);
  return v8;
}
