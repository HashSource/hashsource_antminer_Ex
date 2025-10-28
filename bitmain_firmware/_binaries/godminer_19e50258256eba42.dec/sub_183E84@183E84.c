__int64 __fastcall sub_183E84(int a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  _BYTE v7[64]; // [sp+2Ch] [bp-1380h] BYREF
  _BYTE v8[12]; // [sp+102Ch] [bp-380h] BYREF
  _BYTE v9[576]; // [sp+1038h] [bp-374h] BYREF
  _BYTE dest[281]; // [sp+1278h] [bp-134h] BYREF
  _BYTE v11[5]; // [sp+1391h] [bp-1Bh] BYREF
  int v12; // [sp+1398h] [bp-14h]
  int v13; // [sp+139Ch] [bp-10h]
  int i; // [sp+13A0h] [bp-Ch]
  int v15; // [sp+13A4h] [bp-8h]

  v15 = *a2;
  v13 = (unsigned __int8)(a2[3] << 6) | (a2[4] >> 2);
  v12 = a2[4] & 3;
  memcpy(dest, a2 + 5, 3u);
  for ( i = 0; i <= 277; ++i )
    dest[i + 3] = *(_BYTE *)(a1 + 277 - i);
  memcpy(v11, a2, sizeof(v11));
  bin2hex((int)v9, (int)dest, 0x11Eu);
  bin2hex((int)v8, (int)a2, 5u);
  V_LOCK();
  logfmt_raw(
    v7,
    0x1000u,
    0,
    "work %s nonce %s big_core_id %d small_core_id %d diff %d chip %d",
    v9,
    v8,
    v13,
    v12,
    a3,
    v15);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
           171,
           "dump_v",
           6,
           579,
           60,
           v7);
}
