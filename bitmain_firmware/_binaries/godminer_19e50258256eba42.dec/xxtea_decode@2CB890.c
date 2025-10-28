unsigned int __fastcall xxtea_decode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int result; // r0
  unsigned int *v4; // r3
  _BYTE v6[28]; // [sp+20h] [bp-101Ch] BYREF
  unsigned int v7; // [sp+1020h] [bp-1Ch]
  int v8; // [sp+1024h] [bp-18h]
  unsigned int v9; // [sp+1028h] [bp-14h]
  unsigned int v10; // [sp+102Ch] [bp-10h]
  int i; // [sp+1030h] [bp-Ch]
  unsigned int v12; // [sp+1034h] [bp-8h]

  if ( a2 > 1 )
  {
    v12 = 0x34 / a2 + 6;
    v10 = -1640531527 * v12;
    v9 = *a1;
    do
    {
      v8 = (v10 >> 2) & 3;
      for ( i = a2 - 1; i; --i )
      {
        v7 = a1[i - 1];
        v4 = &a1[i];
        *v4 -= (((v7 >> 5) ^ (4 * v9)) + ((16 * v7) ^ (v9 >> 3)))
             ^ ((v10 ^ v9) + (v7 ^ *(_DWORD *)(a3 + 4 * (v8 ^ i & 3))));
        v9 = *v4;
      }
      v7 = a1[a2 - 1];
      result = v10 ^ v9;
      *a1 -= ((v10 ^ v9) + (v7 ^ *(_DWORD *)(a3 + 4 * v8))) ^ (((v7 >> 5) ^ (4 * v9)) + ((16 * v7) ^ (v9 >> 3)));
      v9 = *a1;
      v10 += 1640531527;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, " xxtea decode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/common/general/xxtea.c",
             150,
             "xxtea_decode",
             12,
             53,
             100,
             v6);
  }
  return result;
}
