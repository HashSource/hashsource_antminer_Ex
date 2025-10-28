unsigned int __fastcall xxtea_encode(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int *v4; // r8
  unsigned int v5; // r4
  int v6; // r5
  unsigned int v7; // r11
  unsigned int *v8; // r9
  int v9; // lr
  unsigned int v10; // r10
  int v11; // r3
  unsigned int result; // r0
  int v13; // r3
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( a2 <= 1 )
  {
    V_LOCK();
    LOWORD(v13) = 7784;
    HIWORD(v13) = (unsigned int)&unk_141180 >> 16;
    logfmt_raw(v17, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v14) = -14512;
    HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
    v15 = *v14;
    LOWORD(v14) = 7728;
    LOWORD(v16) = 7824;
    HIWORD(v14) = (unsigned int)&unk_141148 >> 16;
    HIWORD(v16) = (unsigned int)&unk_1411A8 >> 16;
    return zlog(v15, v16, 143, v14, 12, 24, 100, v17);
  }
  else
  {
    v4 = &a1[a2 - 1];
    v5 = *v4;
    v6 = a2 - 1;
    v7 = 0;
    do
    {
      v8 = a1;
      v9 = 0;
      v7 -= 1640531527;
      v10 = v7 >> 2;
      do
      {
        v11 = *(_DWORD *)(a3 + 4 * (((unsigned __int8)v10 ^ (unsigned __int8)v9++) & 3));
        v5 = (((v11 ^ v5) + (v7 ^ v8[1])) ^ (((4 * v8[1]) ^ (v5 >> 5)) + ((16 * v5) ^ (v8[1] >> 3)))) + *v8;
        *v8++ = v5;
      }
      while ( v9 != v6 );
      result = (16 * v5) ^ (*a1 >> 3);
      v5 = (((v5 ^ *(_DWORD *)(a3 + 4 * (((unsigned __int8)v10 ^ (unsigned __int8)v6) & 3))) + (v7 ^ *a1))
          ^ (((4 * *a1) ^ (v5 >> 5)) + result))
         + *v4;
      *v4 = v5;
    }
    while ( v7 != -1640531527 * (0x34 / a2) - 1253254570 );
  }
  return result;
}
