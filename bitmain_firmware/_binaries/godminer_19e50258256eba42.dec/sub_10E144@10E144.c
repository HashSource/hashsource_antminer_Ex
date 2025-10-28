__int64 __fastcall sub_10E144(int a1, _DWORD *a2)
{
  _BYTE v5[68]; // [sp+48h] [bp-10C4h] BYREF
  char v6[68]; // [sp+1048h] [bp-C4h] BYREF
  char v7[68]; // [sp+108Ch] [bp-80h] BYREF
  _DWORD v8[7]; // [sp+10D0h] [bp-3Ch] BYREF
  int v9; // [sp+10ECh] [bp-20h]
  char *v10; // [sp+10F0h] [bp-1Ch]
  char *v11; // [sp+10F4h] [bp-18h]
  int i; // [sp+10F8h] [bp-14h]
  unsigned int j; // [sp+10FCh] [bp-10h]

  v11 = (char *)a2 + 34;
  v10 = (char *)a2 + 98;
  for ( i = 0; i <= 31; ++i )
    sprintf(&v7[2 * i], "%02x", (unsigned __int8)v11[i]);
  for ( j = 0; j <= 0x1F; ++j )
    sprintf(&v6[2 * j], "%02x", (unsigned __int8)v10[j]);
  V_LOCK();
  sub_FBD60((int)v8, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "asic %02x core %02x header %s nonce %016llx mixhash %s",
    a2[2],
    a2[3],
    v7,
    *(_DWORD *)((char *)a2 + 26),
    *(_DWORD *)((char *)a2 + 30),
    v6);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
           171,
           "dump_nonce_1",
           12,
           1184,
           40,
           v5);
}
