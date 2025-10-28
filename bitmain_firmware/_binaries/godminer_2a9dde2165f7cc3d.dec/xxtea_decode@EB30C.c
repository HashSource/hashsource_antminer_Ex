int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r3
  unsigned int *v9; // r10
  int v10; // r11
  unsigned int v11; // r5
  unsigned int v12; // r9
  unsigned int *v13; // r6
  unsigned int v14; // t1
  int v15; // r4
  int v16; // r4
  int result; // r0
  unsigned int v18; // [sp+10h] [bp-100Ch]
  char v19[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, " xxtea decode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/common/general/xxtea.c",
             153,
             "xxtea_decode",
             12,
             53,
             100,
             v19);
  }
  else
  {
    v6 = sub_12DDD8(52, a2);
    v7 = -1640531527 * (v6 + 6);
    v18 = a2 - 1;
    v8 = *a1;
    v9 = &a1[a2 - 1];
    v10 = v7 + 1640531527 * v6 + 1253254570;
    do
    {
      v11 = v18;
      v12 = v7 >> 2;
      v13 = v9;
      do
      {
        v14 = *--v13;
        v15 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v12 ^ (unsigned __int8)v11--) & 3));
        v8 = v13[1] - (((v14 ^ v15) + (v7 ^ v8)) ^ (((4 * v8) ^ (v14 >> 5)) + ((16 * v14) ^ (v8 >> 3))));
        v13[1] = v8;
      }
      while ( v11 );
      v16 = v7 ^ v8;
      v7 += 1640531527;
      result = (4 * v8) ^ (*v9 >> 5);
      v8 = *a1 - ((result + ((16 * *v9) ^ (v8 >> 3))) ^ ((*v9 ^ *(_DWORD *)(a3 + 4 * (v12 & 3))) + v16));
      *a1 = v8;
    }
    while ( v7 != v10 );
  }
  return result;
}
