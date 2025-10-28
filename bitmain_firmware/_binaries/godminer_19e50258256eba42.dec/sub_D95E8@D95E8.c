__int64 __fastcall sub_D95E8(int a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  int v6; // [sp+28h] [bp-1084h] BYREF
  _BYTE v7[16]; // [sp+1028h] [bp-84h] BYREF
  _BYTE v8[100]; // [sp+1038h] [bp-74h] BYREF
  int v9; // [sp+109Ch] [bp-10h]
  unsigned __int16 v10; // [sp+10A2h] [bp-Ah]
  int v11; // [sp+10A4h] [bp-8h]

  v9 = a2[16];
  v10 = ((a2[14] << 8) & 0x100 | a2[15]) >> 2;
  v11 = a2[15] & 3;
  bin2hex((int)v8, a1, 0x30u);
  bin2hex((int)v7, (int)(a2 + 10), 6u);
  V_LOCK();
  logfmt_raw(
    &v6,
    0x1000u,
    0,
    "work %s nonce %s big_core_id %d small_core_id %d diff %d chip %d",
    v8,
    v7,
    v10,
    v11,
    a3,
    v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
           171,
           "dump_v",
           6,
           533,
           60,
           &v6);
}
