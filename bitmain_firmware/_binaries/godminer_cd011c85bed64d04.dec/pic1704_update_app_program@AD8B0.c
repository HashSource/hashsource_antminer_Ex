int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r6
  char *v3; // r10
  char *v4; // r5
  unsigned int v5; // r0
  int v6; // r9
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r2
  char *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r0
  unsigned __int8 v28[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v30; // [sp+20h] [bp-1814h] BYREF
  int v31; // [sp+24h] [bp-1810h]
  int v32; // [sp+28h] [bp-180Ch]
  int v33; // [sp+2Ch] [bp-1808h]
  int v34[512]; // [sp+30h] [bp-1804h] BYREF
  _BYTE v35[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v36; // [sp+844h] [bp-FF0h]

  *(_DWORD *)s = 0;
  v30 = 0;
  *(_DWORD *)&s[3] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( !v2 )
  {
    v26 = snprintf(
            (char *)v34,
            0x800u,
            "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
            "pic1704_update_app_program",
            a1);
    V_LOCK(v26);
    v27 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v27);
    v6 = -1;
    v25 = 274;
    goto LABEL_19;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    v23 = snprintf((char *)v34, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v23);
    v24 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v24);
    v6 = -1;
    v25 = 281;
LABEL_19:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_update_app_program",
      26,
      v25,
      20,
      v35);
    return v6;
  }
  v4 = v3;
  fseek(v2, 0, 0);
  do
  {
    v4 += 4;
    fgets(s, 7, v2);
    v5 = strtoul(s, 0, 16);
    *(v4 - 1) = v5;
    *(v4 - 4) = HIBYTE(v5);
    *(v4 - 3) = BYTE2(v5);
    *(v4 - 2) = BYTE1(v5);
  }
  while ( v4 != v3 + 14080 );
  fclose(v2);
  v6 = pic1704_reset(a1);
  if ( v6 )
  {
    v6 = pic1704_erase_program(a1);
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v11 = &v3[16 * v7];
        v34[1] = (int)&v30;
        v12 = *(_DWORD *)v11;
        v13 = *((_DWORD *)v11 + 1);
        v14 = *((_DWORD *)v11 + 2);
        v15 = *((_DWORD *)v11 + 3);
        ++v7;
        HIBYTE(v34[0]) = a1;
        LOWORD(v34[0]) = 4098;
        v30 = v12;
        v31 = v13;
        v32 = v14;
        v33 = v15;
        BYTE2(v34[0]) = 2;
        v28[1] = 0;
        memset(v35, 0, sizeof(v35));
        v36 = 0;
        v28[0] = -1;
        if ( !sub_AD2FC(v34[0], (int)&v30, (int)v35, v28) )
        {
          v6 = 0;
          v16 = snprintf((char *)v34, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
          V_LOCK(v16);
          v17 = logfmt_raw((int)v35, 0x1000u);
          V_UNLOCK(v17);
          v10 = 335;
          goto LABEL_12;
        }
      }
      while ( v7 != 880 );
      v6 = pic1704_reset(a1);
      if ( v6 )
      {
        v6 = 1;
        free(v3);
        return v6;
      }
      v21 = snprintf((char *)v34, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK(v21);
      v22 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v22);
      v10 = 345;
    }
    else
    {
      v8 = snprintf((char *)v34, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK(v8);
      v9 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v9);
      v10 = 315;
    }
  }
  else
  {
    v19 = snprintf((char *)v34, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v20);
    v10 = 306;
  }
LABEL_12:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_update_app_program",
    26,
    v10,
    20,
    v35);
  free(v3);
  return v6;
}
