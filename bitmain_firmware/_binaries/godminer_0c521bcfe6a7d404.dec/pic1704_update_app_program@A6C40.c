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
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  unsigned __int8 v35[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v37; // [sp+20h] [bp-1814h] BYREF
  int v38; // [sp+24h] [bp-1810h]
  int v39; // [sp+28h] [bp-180Ch]
  int v40; // [sp+2Ch] [bp-1808h]
  int v41[512]; // [sp+30h] [bp-1804h] BYREF
  _BYTE v42[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v43; // [sp+844h] [bp-FF0h]

  *(_DWORD *)s = 0;
  v37 = 0;
  *(_DWORD *)&s[3] = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( !v2 )
  {
    v33 = snprintf(
            (char *)v41,
            0x800u,
            "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
            "pic1704_update_app_program",
            a1);
    V_LOCK(v33);
    v34 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v34);
    v6 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      168,
      "pic1704_update_app_program",
      26,
      274,
      20,
      v42);
    return v6;
  }
  v3 = (char *)calloc(0x3700u, 1u);
  if ( !v3 )
  {
    v29 = snprintf((char *)v41, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v29);
    v30 = logfmt_raw((int)v42, 0x1000u);
    v6 = -1;
    V_UNLOCK(v30);
    v31 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            168,
            "pic1704_update_app_program",
            26,
            281,
            20,
            v42);
    V_LOCK(v31);
    v32 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      168,
      "pic1704_update_app_program",
      26,
      282,
      100,
      v42);
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
  while ( v3 + 14080 != v4 );
  fclose(v2);
  if ( pic1704_reset(a1) )
  {
    v6 = pic1704_erase_program(a1);
    if ( !v6 )
    {
      v8 = snprintf((char *)v41, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
      V_LOCK(v8);
      v9 = logfmt_raw((int)v42, 0x1000u);
      V_UNLOCK(v9);
      v10 = 317;
LABEL_12:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        168,
        "pic1704_update_app_program",
        26,
        v10,
        20,
        v42);
      free(v3);
      return v6;
    }
    v7 = 0;
    do
    {
      v11 = &v3[16 * v7];
      v41[1] = (int)&v37;
      v12 = *(_DWORD *)v11;
      v13 = *((_DWORD *)v11 + 1);
      v14 = *((_DWORD *)v11 + 2);
      v15 = *((_DWORD *)v11 + 3);
      ++v7;
      HIBYTE(v41[0]) = a1;
      LOWORD(v41[0]) = 4098;
      v37 = v12;
      v38 = v13;
      v39 = v14;
      v40 = v15;
      BYTE2(v41[0]) = 2;
      v35[1] = 0;
      memset(v42, 0, sizeof(v42));
      v43 = 0;
      v35[0] = -1;
      if ( !sub_A668C(v41[0], (int)&v37, (int)v42, v35) )
      {
        v6 = 0;
        v16 = snprintf((char *)v41, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
        V_LOCK(v16);
        v17 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v17);
        v10 = 337;
        goto LABEL_12;
      }
    }
    while ( v7 != 880 );
    if ( pic1704_reset(a1) )
    {
      v6 = 1;
      free(v3);
      return v6;
    }
    v25 = snprintf((char *)v41, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v25);
    v26 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v26);
    v27 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            168,
            "pic1704_update_app_program",
            26,
            347,
            20,
            v42);
    V_LOCK(v27);
    v28 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v28);
    v23 = g_zc;
    v24 = 348;
  }
  else
  {
    v19 = snprintf((char *)v41, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v20);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
            168,
            "pic1704_update_app_program",
            26,
            307,
            20,
            v42);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v22);
    v23 = g_zc;
    v24 = 308;
  }
  zlog(
    v23,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
    168,
    "pic1704_update_app_program",
    26,
    v24,
    100,
    v42);
  free(v3);
  return 0;
}
