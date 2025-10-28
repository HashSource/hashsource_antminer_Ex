int __fastcall sub_853C8(_DWORD *a1, int a2)
{
  const char *v2; // r4
  void *v5; // r0
  int v6; // r0
  void *v7; // r0
  int (__fastcall *v8)(_DWORD *, _DWORD *, int, void *, int *, char *, int, _DWORD); // lr
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned __int16 *v12; // r6
  unsigned int v13; // r9
  char *v14; // r1
  char *v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r9
  char **v20; // r12
  char *v21; // r0
  char *v22; // r1
  char *v23; // r2
  char *v24; // r3
  int v25; // r9
  char *v26; // r1
  char *v27; // r2
  char *v28; // r3
  int v29; // r0
  void *v30; // r0
  unsigned __int8 *v31; // r8
  char *v32; // r4
  int v33; // r6
  int v34; // r9
  int v36; // r2
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int result; // r0
  char *v43; // [sp+0h] [bp-160Ch] BYREF
  char *v44; // [sp+4h] [bp-1608h]
  const char *v45; // [sp+8h] [bp-1604h]
  char *v46; // [sp+Ch] [bp-1600h]
  char *v47; // [sp+10h] [bp-15FCh]
  char *v48; // [sp+14h] [bp-15F8h]
  char *v49; // [sp+18h] [bp-15F4h]
  char *v50; // [sp+1Ch] [bp-15F0h]
  const char *v51; // [sp+20h] [bp-15ECh]
  const char *v52; // [sp+24h] [bp-15E8h]
  int v53; // [sp+28h] [bp-15E4h]
  int v54; // [sp+2Ch] [bp-15E0h]
  int v55; // [sp+30h] [bp-15DCh]
  int v56; // [sp+34h] [bp-15D8h]
  int v57; // [sp+38h] [bp-15D4h]
  int v58; // [sp+3Ch] [bp-15D0h]
  const char *v59; // [sp+40h] [bp-15CCh]
  const char *v60; // [sp+44h] [bp-15C8h]
  int v61; // [sp+48h] [bp-15C4h]
  const char *v62; // [sp+54h] [bp-15B8h]
  const char *v63; // [sp+58h] [bp-15B4h]
  const char *v64; // [sp+5Ch] [bp-15B0h]
  const char *v65; // [sp+60h] [bp-15ACh]
  int v66; // [sp+64h] [bp-15A8h]
  void *ptr; // [sp+68h] [bp-15A4h]
  char **v68; // [sp+6Ch] [bp-15A0h]
  int v69; // [sp+74h] [bp-1598h] BYREF
  _DWORD v70[4]; // [sp+78h] [bp-1594h] BYREF
  char v71[16]; // [sp+88h] [bp-1584h] BYREF
  char *v72; // [sp+98h] [bp-1574h]
  char *v73; // [sp+9Ch] [bp-1570h]
  char *v74; // [sp+A0h] [bp-156Ch]
  char *v75; // [sp+A4h] [bp-1568h]
  _BYTE v76[32]; // [sp+A8h] [bp-1564h] BYREF
  _DWORD v77[8]; // [sp+C8h] [bp-1544h] BYREF
  _DWORD v78[8]; // [sp+E8h] [bp-1524h] BYREF
  _BYTE s[256]; // [sp+108h] [bp-1504h] BYREF
  char v80[1024]; // [sp+208h] [bp-1404h] BYREF
  _BYTE v81[4100]; // [sp+608h] [bp-1004h] BYREF

  v2 = 0;
  v69 = 0;
  v5 = memset(s, 0, sizeof(s));
  V_LOCK(v5);
  v6 = logfmt_raw((int)v81, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_get_addr_KAS_2380",
    29,
    50,
    20,
    v81);
  v66 = a2;
  v70[0] = 0;
  v70[2] = 1;
  v70[1] = 0;
  v70[3] = 0;
  v7 = calloc(12 * a2, 1u);
  v43 = (char *)&v69;
  v8 = (int (__fastcall *)(_DWORD *, _DWORD *, int, void *, int *, char *, int, _DWORD))a1[65];
  ptr = v7;
  v9 = v8(a1, v70, a2, v7, &v69, v44, 3000, 0);
  V_LOCK(v9);
  V_INT((int)v71, "chain");
  v52 = "ChipSetting_get_addr_KAS_2380";
  v53 = v69;
  v51 = "%s detect %d chips";
  v47 = v72;
  v48 = v73;
  v49 = v74;
  v50 = v75;
  v10 = logfmt_raw((int)v81, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c",
          153,
          "ChipSetting_get_addr_KAS_2380",
          29,
          60,
          60,
          v81);
  if ( v69 > 0 )
  {
    v62 = "ChipSetting_get_addr_KAS_2380";
    v65 = 0;
    v64 = "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x";
    v63 = "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c";
    v12 = (unsigned __int16 *)ptr;
    do
    {
      while ( 1 )
      {
        v13 = *v12;
        V_LOCK(v11);
        v14 = (char *)*((unsigned __int8 *)v12 + 4);
        v15 = (char *)v12[3];
        LOWORD(v13) = __rev16(v13);
        v44 = (char *)a1[74];
        v45 = v2++;
        v47 = v14;
        v46 = v15;
        v43 = (char *)(unsigned __int16)v13;
        v16 = logfmt_raw((int)v81, 0x1000u);
        V_UNLOCK(v16);
        v11 = zlog(g_zc, v63, 153, v62, 29, 64, 20, v81);
        if ( a1[74] == (unsigned __int16)v13 )
          break;
        v12 += 6;
        if ( v69 <= (int)v2 )
          goto LABEL_7;
      }
      v12 += 6;
      v17 = a1[99];
      v18 = *((unsigned __int8 *)v12 - 8);
      ++v65;
      v19 = sub_12DDD8(v18, v17);
      ++s[v19];
      V_LOCK(v19);
      v68 = (char **)v76;
      V_INT((int)v76, "chain");
      v20 = v68;
      v68 = &v43;
      v21 = *v20;
      v22 = v20[1];
      v23 = v20[2];
      v24 = v20[3];
      v20 += 4;
      v52 = (const char *)v19;
      v25 = *((unsigned __int8 *)v12 - 8);
      v51 = "chip_id:%d, %03d";
      v53 = v25;
      v43 = v21;
      v44 = v22;
      v45 = v23;
      v46 = v24;
      v26 = v20[1];
      v27 = v20[2];
      v28 = v20[3];
      v47 = *v20;
      v48 = v26;
      v49 = v27;
      v50 = v28;
      v29 = logfmt_raw((int)v81, 0x1000u);
      V_UNLOCK(v29);
      v11 = zlog(g_zc, v63, 153, v62, 29, 70, 20, v81);
    }
    while ( v69 > (int)v2 );
LABEL_7:
    v2 = v65;
  }
  else
  {
    v65 = 0;
  }
  v30 = memset(v80, 0, sizeof(v80));
  v80[0] = 10;
  if ( v66 )
  {
    v62 = v2;
    v31 = s;
    v32 = v80;
    v33 = 0;
    v34 = v66;
    do
    {
      while ( *v31++ )
      {
        if ( v34 == ++v33 )
          goto LABEL_13;
      }
      v36 = v33++;
      v30 = (void *)sprintf(v32, "%03d ", v36);
      v32 += 4;
    }
    while ( v34 != v33 );
LABEL_13:
    v2 = v62;
  }
  if ( a1[76] > (int)v65 )
  {
    V_LOCK(v30);
    V_INT((int)v77, "chain");
    V_STR((int)v78, "error");
    v59 = "detected asic num less than design(%d<%d)";
    v60 = v65;
    v61 = a1[76];
    v51 = (const char *)v78[0];
    v52 = (const char *)v78[1];
    v53 = v78[2];
    v54 = v78[3];
    v55 = v78[4];
    v56 = v78[5];
    v57 = v78[6];
    v58 = v78[7];
    v43 = (char *)v77[0];
    v44 = (char *)v77[1];
    v45 = (const char *)v77[2];
    v46 = (char *)v77[3];
    v47 = (char *)v77[4];
    v48 = (char *)v77[5];
    v49 = (char *)v77[6];
    v50 = (char *)v77[7];
    v37 = logfmt_raw((int)v81, 0x1000u);
    V_UNLOCK(v37);
    v38 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/chip_setting.c",
            153,
            "ChipSetting_get_addr_KAS_2380",
            29,
            96,
            100,
            v81);
    V_LOCK(v38);
    v43 = (char *)a1[56];
    v39 = logfmt_raw((int)v81, 0x1000u);
    V_UNLOCK(v39);
    v40 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/chip_setting.c",
            153,
            "ChipSetting_get_addr_KAS_2380",
            29,
            97,
            100,
            v81);
    V_LOCK(v40);
    v43 = v80;
    v41 = logfmt_raw((int)v81, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_setting.c",
      153,
      "ChipSetting_get_addr_KAS_2380",
      29,
      98,
      40,
      v81);
  }
  free(ptr);
  result = v69;
  a1[98] = v2;
  return result;
}
