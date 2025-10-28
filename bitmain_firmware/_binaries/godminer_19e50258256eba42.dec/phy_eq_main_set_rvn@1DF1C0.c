int __fastcall phy_eq_main_set_rvn(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  unsigned int v4; // r0
  unsigned int v5; // r0
  _BYTE v8[44]; // [sp+30h] [bp-106Ch] BYREF
  _DWORD v9[7]; // [sp+1030h] [bp-6Ch] BYREF
  int v10; // [sp+104Ch] [bp-50h]
  _DWORD v11[7]; // [sp+1050h] [bp-4Ch] BYREF
  int v12; // [sp+106Ch] [bp-30h]
  unsigned int v13; // [sp+1074h] [bp-28h]
  void *ptr; // [sp+1078h] [bp-24h]
  int v15; // [sp+107Ch] [bp-20h]
  unsigned int k; // [sp+1080h] [bp-1Ch]
  unsigned int j; // [sp+1084h] [bp-18h]
  unsigned int i; // [sp+1088h] [bp-14h]
  unsigned int m; // [sp+108Ch] [bp-10h]

  v15 = (a2 << 18) | (a2 << 12) | (a2 << 6) | a2;
  ptr = malloc(0x1800u);
  v13 = sub_1D13F0(a1, 0, 111, ptr);
  for ( i = 0; v13 > i; ++i )
  {
    if ( sub_1C65E8(*((_WORD *)ptr + 6 * i + 3)) == 111 && !*((_BYTE *)ptr + 12 * i + 8) )
    {
      v2 = sub_1C65C0(*((_DWORD *)ptr + 3 * i));
      sub_1D0CB8(a1, 111, v2 & 0xFF000000 | v15);
      break;
    }
  }
  v13 = sub_1D13F0(a1, 0, 111, ptr);
  for ( j = 0; v13 > j; ++j )
  {
    if ( sub_1C65E8(*((_WORD *)ptr + 6 * j + 3)) == 111 && !*((_BYTE *)ptr + 12 * j + 8) )
    {
      V_LOCK();
      sub_1C61DC((int)v9, *(int *)(a1 + 272));
      v3 = sub_1C65C0(*((_DWORD *)ptr + 3 * j));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x6f rdata %08x",
        v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_eq_main_set_rvn",
        19,
        1374,
        60,
        v8);
      break;
    }
  }
  v13 = sub_1D13F0(a1, 0, 112, ptr);
  for ( k = 0; v13 > k; ++k )
  {
    if ( sub_1C65E8(*((_WORD *)ptr + 6 * k + 3)) == 112 && !*((_BYTE *)ptr + 12 * k + 8) )
    {
      v4 = sub_1C65C0(*((_DWORD *)ptr + 3 * k));
      sub_1D0CB8(a1, 112, v4 & 0xFF000000 | v15);
      break;
    }
  }
  v13 = sub_1D13F0(a1, 0, 112, ptr);
  for ( m = 0; v13 > m; ++m )
  {
    if ( sub_1C65E8(*((_WORD *)ptr + 6 * m + 3)) == 112 && !*((_BYTE *)ptr + 12 * m + 8) )
    {
      V_LOCK();
      sub_1C61DC((int)v11, *(int *)(a1 + 272));
      v5 = sub_1C65C0(*((_DWORD *)ptr + 3 * m));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x70 rdata %08x",
        v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
        174,
        "phy_eq_main_set_rvn",
        19,
        1394,
        60,
        v8);
      break;
    }
  }
  free(ptr);
  return 0;
}
