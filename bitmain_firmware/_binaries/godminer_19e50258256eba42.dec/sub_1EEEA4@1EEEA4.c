__int64 __fastcall sub_1EEEA4(int a1, int a2, int a3)
{
  _BYTE v7[60]; // [sp+50h] [bp-1ABCh] BYREF
  _BYTE v8[12]; // [sp+1050h] [bp-ABCh] BYREF
  _BYTE v9[12]; // [sp+1AD4h] [bp-38h] BYREF
  _DWORD v10[7]; // [sp+1AE0h] [bp-2Ch] BYREF
  int v11; // [sp+1AFCh] [bp-10h]

  bin2hex((int)v9, a3 + 48, 4u);
  bin2hex((int)v8, a3 + 54, 0x540u);
  V_LOCK();
  sub_1E0BC0((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v7,
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
    "asic %d, work cnt %d, diff %d, jod_id %s, nonce_value %s, sol %s",
    *(unsigned __int8 *)(a2 + 3),
    *(unsigned __int8 *)(a2 + 4),
    *(unsigned __int8 *)(a3 + 52),
    a3 + 16,
    v9,
    v8);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
           171,
           "dump_nonce_zec",
           14,
           360,
           20,
           v7);
}
