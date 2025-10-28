__int64 __fastcall sub_1610B8(int a1, unsigned __int8 *a2, int a3)
{
  _BYTE v7[32]; // [sp+2Ch] [bp-1220h] BYREF
  _BYTE v8[16]; // [sp+102Ch] [bp-220h] BYREF
  _BYTE v9[516]; // [sp+103Ch] [bp-210h] BYREF
  int v10; // [sp+1240h] [bp-Ch]
  int v11; // [sp+1244h] [bp-8h]

  v10 = *a2;
  v11 = a2[5] & 0x3F;
  memcpy((void *)(a1 + 250), a2, 6u);
  bin2hex((int)v9, a1, 0x100u);
  bin2hex((int)v8, (int)a2, 6u);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "work %s nonce %s big_core_id %d diff %d chip %d", v9, v8, v11, a3, v10);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
           171,
           "dump_v",
           6,
           630,
           60,
           v7);
}
