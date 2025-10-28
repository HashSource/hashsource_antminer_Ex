__int64 __fastcall sub_EA534(int a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  _BYTE v6[60]; // [sp+28h] [bp-10BCh] BYREF
  _BYTE v7[12]; // [sp+1028h] [bp-BCh] BYREF
  _BYTE v8[164]; // [sp+1034h] [bp-B0h] BYREF
  int v9; // [sp+10D8h] [bp-Ch]
  int v10; // [sp+10DCh] [bp-8h]

  v9 = *a2;
  v10 = a2[3] & 0xF;
  bin2hex((int)v8, a1, 0x50u);
  bin2hex((int)v7, (int)a2, 4u);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "work %s nonce %s big_core_id %d small_core_id 0 diff %d chip %d", v8, v7, v10, a3, v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           173,
           "dump_v",
           6,
           731,
           60,
           v6);
}
