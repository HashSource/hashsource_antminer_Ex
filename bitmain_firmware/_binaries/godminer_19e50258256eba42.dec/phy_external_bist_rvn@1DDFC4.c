int __fastcall phy_external_bist_rvn(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int v4; // r0
  int v5; // r9
  int v6; // r10
  unsigned int v7; // r0
  int v8; // r8
  unsigned __int16 v9; // r0
  int v10; // r0
  int v11; // r9
  int v12; // r10
  unsigned int v13; // r0
  int v14; // r8
  unsigned __int16 v15; // r0
  int v17; // [sp+24h] [bp-1198h]
  int v18; // [sp+24h] [bp-1198h]
  int v19; // [sp+38h] [bp-1184h]
  int v20; // [sp+38h] [bp-1184h]
  _BYTE v25[52]; // [sp+48h] [bp-1174h] BYREF
  int v26; // [sp+1048h] [bp-174h]
  int v27; // [sp+104Ch] [bp-170h]
  _DWORD v28[8]; // [sp+1050h] [bp-16Ch] BYREF
  _DWORD s[8]; // [sp+1070h] [bp-14Ch] BYREF
  _DWORD v30[7]; // [sp+1090h] [bp-12Ch] BYREF
  int v31; // [sp+10ACh] [bp-110h]
  _DWORD v32[7]; // [sp+10B0h] [bp-10Ch] BYREF
  int v33; // [sp+10CCh] [bp-F0h]
  _DWORD v34[7]; // [sp+10D0h] [bp-ECh] BYREF
  int v35; // [sp+10ECh] [bp-D0h]
  _DWORD v36[7]; // [sp+10F0h] [bp-CCh] BYREF
  int v37; // [sp+110Ch] [bp-B0h]
  _DWORD v38[7]; // [sp+1110h] [bp-ACh] BYREF
  int v39; // [sp+112Ch] [bp-90h]
  _DWORD v40[7]; // [sp+1130h] [bp-8Ch] BYREF
  int v41; // [sp+114Ch] [bp-70h]
  _DWORD v42[7]; // [sp+1150h] [bp-6Ch] BYREF
  int v43; // [sp+116Ch] [bp-50h]
  int v44; // [sp+1174h] [bp-48h]
  unsigned int v45; // [sp+1178h] [bp-44h]
  unsigned __int8 k; // [sp+117Ch] [bp-40h]
  unsigned __int8 j; // [sp+117Dh] [bp-3Fh]
  unsigned __int8 m; // [sp+117Eh] [bp-3Eh]
  unsigned __int8 n; // [sp+117Fh] [bp-3Dh]
  unsigned int kk; // [sp+1180h] [bp-3Ch]
  unsigned __int8 jj; // [sp+1187h] [bp-35h]
  unsigned int ii; // [sp+1188h] [bp-34h]
  unsigned __int8 mm; // [sp+118Fh] [bp-2Dh]
  void *ptr; // [sp+1190h] [bp-2Ch]
  unsigned __int8 i; // [sp+1197h] [bp-25h]

  V_LOCK();
  sub_1C61DC((int)v30, *(int *)(a1 + 272));
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "%s start",
    "phy_external_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v25);
  memset(s, 0, sizeof(s));
  memset(v28, 0, sizeof(v28));
  ptr = malloc(0x1800u);
  for ( i = 0; i < (unsigned int)a4; ++i )
  {
    v44 = check_core_reg_with_expect_data_rvn(a1, a2, *(_BYTE *)(a3 + i), 64, 0xFF000100);
    if ( v44 )
    {
      V_LOCK();
      sub_1C61DC((int)v32, *(int *)(a1 + 272));
      logfmt_raw(
        v25,
        0x1000u,
        0,
        v33,
        v32[0],
        v32[1],
        v32[2],
        v32[3],
        v32[4],
        v32[5],
        v32[6],
        v33,
        "%s PHY core %02x pcs lock failed!",
        "phy_external_bist_rvn",
        *(unsigned __int8 *)(a3 + i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v25);
    }
  }
  for ( j = 0; j < (unsigned int)a4; ++j )
  {
    sub_1D0F04(a1, *(_BYTE *)(a3 + j), 133, 0xFFFF);
    sub_1D0F04(a1, *(_BYTE *)(a3 + j), 134, 1342177279);
  }
  sub_1D0CB8(a1, 132, -2147483647);
  sleep(0xAu);
  for ( k = 0; k < (unsigned int)a4; ++k )
  {
    v44 = check_core_reg_with_expect_data_rvn(a1, a2, *(_BYTE *)(a3 + k), 139, 0xFF0000FF);
    if ( v44 )
    {
      V_LOCK();
      sub_1C61DC((int)v34, *(int *)(a1 + 272));
      logfmt_raw(
        v25,
        0x1000u,
        0,
        v35,
        v34[0],
        v34[1],
        v34[2],
        v34[3],
        v34[4],
        v34[5],
        v34[6],
        v35,
        "%s PHY core %02x mac bist failed!",
        "phy_external_bist_rvn",
        *(unsigned __int8 *)(a3 + k));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v25);
    }
  }
  for ( m = 0; m < (unsigned int)a4; ++m )
  {
    v27 = -2088599168;
    for ( n = 0; n <= 3u; ++n )
    {
      v45 = sub_1D13F0(a1, *(unsigned __int8 *)(a3 + m), *((unsigned __int8 *)&v28[-1] + n), ptr);
      for ( ii = 0; v45 > ii; ++ii )
      {
        v4 = sub_1C65E8(*((_WORD *)ptr + 6 * ii + 3));
        if ( v4 == *((unsigned __int8 *)&v28[-1] + n) )
        {
          V_LOCK();
          sub_1C61DC((int)v36, *(int *)(a1 + 272));
          v5 = *((unsigned __int8 *)ptr + 12 * ii + 4);
          v6 = *((unsigned __int8 *)ptr + 12 * ii + 8);
          v19 = sub_1C65E8(*((_WORD *)ptr + 6 * ii + 3));
          v7 = sub_1C65C0(*((_DWORD *)ptr + 3 * ii));
          logfmt_raw(
            v25,
            0x1000u,
            0,
            v37,
            v36[0],
            v36[1],
            v36[2],
            v36[3],
            v36[4],
            v36[5],
            v36[6],
            v37,
            "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
            v5,
            v6,
            v19,
            v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
            174,
            "phy_external_bist_rvn",
            21,
            1265,
            20,
            v25);
          v8 = (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * ii));
          v9 = sub_1C65C0(*((_DWORD *)ptr + 3 * ii));
          v28[*((unsigned __int8 *)ptr + 12 * ii + 4)] += v8 + v9;
          dword_C25918 += (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * ii)) != 0;
          dword_C25918 += (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * ii)) != 0;
        }
      }
    }
    v26 = -1970698105;
    for ( jj = 0; jj <= 3u; ++jj )
    {
      v45 = sub_1D13F0(a1, *(unsigned __int8 *)(a3 + m), *((unsigned __int8 *)&v26 + jj), ptr);
      for ( kk = 0; v45 > kk; ++kk )
      {
        v10 = sub_1C65E8(*((_WORD *)ptr + 6 * kk + 3));
        if ( v10 == *((unsigned __int8 *)&v26 + jj) )
        {
          V_LOCK();
          sub_1C61DC((int)v38, *(int *)(a1 + 272));
          v11 = *((unsigned __int8 *)ptr + 12 * kk + 4);
          v12 = *((unsigned __int8 *)ptr + 12 * kk + 8);
          v20 = sub_1C65E8(*((_WORD *)ptr + 6 * kk + 3));
          v13 = sub_1C65C0(*((_DWORD *)ptr + 3 * kk));
          logfmt_raw(
            v25,
            0x1000u,
            0,
            v39,
            v38[0],
            v38[1],
            v38[2],
            v38[3],
            v38[4],
            v38[5],
            v38[6],
            v39,
            "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
            v11,
            v12,
            v20,
            v13);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
            174,
            "phy_external_bist_rvn",
            21,
            1283,
            20,
            v25);
          v14 = (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * kk));
          v15 = sub_1C65C0(*((_DWORD *)ptr + 3 * kk));
          s[*((unsigned __int8 *)ptr + 12 * kk + 4)] += v14 + v15;
          dword_C2591C += (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * kk)) != 0;
          dword_C2591C += (unsigned __int16)sub_1C65C0(*((_DWORD *)ptr + 3 * kk)) != 0;
        }
      }
    }
  }
  free(ptr);
  for ( mm = 0; mm <= 7u; ++mm )
  {
    *(_QWORD *)&dword_C25908 += (unsigned int)s[mm];
    *(_QWORD *)&dword_C25910 += (unsigned int)v28[mm];
  }
  V_LOCK();
  sub_1C61DC((int)v40, *(int *)(a1 + 272));
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v41,
    v40[0],
    v40[1],
    v40[2],
    v40[3],
    v40[4],
    v40[5],
    v40[6],
    v41,
    "[PHY BIST ERR NUM] total 0x%llx",
    v17,
    dword_C25908,
    dword_C2590C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1299,
    60,
    v25);
  V_LOCK();
  sub_1C61DC((int)v42, *(int *)(a1 + 272));
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v43,
    v42[0],
    v42[1],
    v42[2],
    v42[3],
    v42[4],
    v42[5],
    v42[6],
    v43,
    "[PHY BIST LOST NUM] total 0x%llx",
    v18,
    dword_C25910,
    dword_C25914);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v25);
  return 0;
}
