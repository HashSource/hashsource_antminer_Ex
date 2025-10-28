int __fastcall sub_1DC754(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int result; // r0
  _BYTE v9[52]; // [sp+40h] [bp-1034h] BYREF
  _DWORD v10[7]; // [sp+1040h] [bp-34h] BYREF
  int v11; // [sp+105Ch] [bp-18h]
  int v12; // [sp+1064h] [bp-10h]

  sub_1D0F04(a1, a3, 83, 16711935);
  result = check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0);
  v12 = result;
  if ( result )
  {
    V_LOCK();
    sub_1C61DC((int)v10, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v11,
      v10[0],
      v10[1],
      v10[2],
      v10[3],
      v10[4],
      v10[5],
      v10[6],
      v11,
      "%s PHY core %02x %s handshake failed!",
      "phy_handshake_rvn",
      a3,
      a4);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
             174,
             "phy_handshake_rvn",
             17,
             827,
             100,
             v9);
  }
  return result;
}
