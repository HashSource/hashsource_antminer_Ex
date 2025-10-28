__int64 __fastcall sub_FACF4(int a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  _BYTE v7[8]; // [sp+2Ch] [bp-1188h] BYREF
  _BYTE v8[12]; // [sp+102Ch] [bp-188h] BYREF
  _BYTE v9[364]; // [sp+1038h] [bp-17Ch] BYREF
  int v10; // [sp+11A4h] [bp-10h]
  int v11; // [sp+11A8h] [bp-Ch]
  int v12; // [sp+11ACh] [bp-8h]

  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2] >> 6;
  memcpy((void *)(a1 + 175), a2, 5u);
  bin2hex((int)v9, a1, 0xB4u);
  bin2hex((int)v8, (int)a2, 5u);
  V_LOCK();
  logfmt_raw(
    v7,
    0x1000u,
    0,
    "work %s nonce %s big_core_id %d small_core_id %d diff %d chip %d",
    v9,
    v8,
    v11,
    v12,
    a3,
    v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
           171,
           "dump_v",
           6,
           533,
           60,
           v7);
}
