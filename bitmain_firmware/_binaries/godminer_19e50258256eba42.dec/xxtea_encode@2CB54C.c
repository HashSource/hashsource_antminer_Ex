unsigned int *__fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *result; // r0
  unsigned int *v4; // r3
  unsigned int *v5; // r3
  _BYTE v7[28]; // [sp+20h] [bp-101Ch] BYREF
  unsigned int v8; // [sp+1020h] [bp-1Ch]
  int v9; // [sp+1024h] [bp-18h]
  unsigned int v10; // [sp+1028h] [bp-14h]
  unsigned int v11; // [sp+102Ch] [bp-10h]
  unsigned int i; // [sp+1030h] [bp-Ch]
  unsigned int v13; // [sp+1034h] [bp-8h]

  if ( a2 > 1 )
  {
    v13 = 0x34 / a2 + 6;
    v11 = 0;
    v10 = a1[a2 - 1];
    do
    {
      v11 -= 1640531527;
      v9 = (v11 >> 2) & 3;
      for ( i = 0; i < a2 - 1; ++i )
      {
        v8 = a1[i + 1];
        v4 = &a1[i];
        *v4 += (((v10 >> 5) ^ (4 * v8)) + ((16 * v10) ^ (v8 >> 3)))
             ^ ((v11 ^ v8) + (v10 ^ *(_DWORD *)(a3 + 4 * (v9 ^ i & 3))));
        v10 = *v4;
      }
      v8 = *a1;
      result = a1;
      v5 = &a1[a2 - 1];
      *v5 += (((v10 >> 5) ^ (4 * v8)) + ((16 * v10) ^ (v8 >> 3)))
           ^ ((v11 ^ v8) + (v10 ^ *(_DWORD *)(a3 + 4 * (v9 ^ i & 3))));
      v10 = *v5;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, " xxtea encode input data length <= 1");
    V_UNLOCK();
    return (unsigned int *)zlog(
                             g_zc,
                             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/releas"
                             "e/build/godminer-origin_godminer-new/common/general/xxtea.c",
                             150,
                             "xxtea_encode",
                             12,
                             24,
                             100,
                             v7);
  }
  return result;
}
