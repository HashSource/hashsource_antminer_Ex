int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v5; // r8
  unsigned int v6; // r4
  unsigned int v7; // r5
  unsigned int v8; // r11
  unsigned int *v9; // r9
  int v10; // lr
  unsigned int v11; // r10
  int v12; // r3
  int result; // r0
  int v14; // [sp+10h] [bp-100Ch]
  char v15[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, " xxtea encode input data length <= 1");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/common/general/xxtea.c",
             143,
             "xxtea_encode",
             12,
             24,
             100,
             v15);
  }
  else
  {
    v5 = &a1[a2 - 1];
    v6 = *v5;
    v7 = a2 - 1;
    v8 = 0;
    v14 = -1640531527 * sub_12DE60(52) - 1253254570;
    do
    {
      v9 = a1;
      v10 = 0;
      v8 -= 1640531527;
      v11 = v8 >> 2;
      do
      {
        v12 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v10++) & 3));
        v6 = (((v12 ^ v6) + (v8 ^ v9[1])) ^ (((4 * v9[1]) ^ (v6 >> 5)) + ((16 * v6) ^ (v9[1] >> 3)))) + *v9;
        *v9++ = v6;
      }
      while ( v10 != v7 );
      result = (16 * v6) ^ (*a1 >> 3);
      v6 = (((v6 ^ *(_DWORD *)(a3 + 4 * (((unsigned __int8)v11 ^ (unsigned __int8)v7) & 3))) + (v8 ^ *a1))
          ^ (((4 * *a1) ^ (v6 >> 5)) + result))
         + *v5;
      *v5 = v6;
    }
    while ( v8 != v14 );
  }
  return result;
}
