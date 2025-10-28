int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      V_LOCK();
      LOWORD(v7) = -26280;
      HIWORD(v7) = (unsigned int)"put data length <= 1" >> 16;
      logfmt_raw(v11, 0x1000u, 0, v7, v5);
      V_UNLOCK();
      LOWORD(v8) = -26476;
      HIWORD(v8) = (unsigned int)"put data length <= 1" >> 16;
      zlog(g_zc, v8, 153, "data_enc", 8, 93, 100, v11);
      return 0;
    }
    else
    {
      xxtea_encode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v9) = -26224;
    HIWORD(v9) = (unsigned int)"st be 0, but now is %d" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, a3);
    V_UNLOCK();
    LOWORD(v10) = -26476;
    HIWORD(v10) = (unsigned int)"put data length <= 1" >> 16;
    zlog(g_zc, v10, 153, "data_enc", 8, 100, 100, v11);
    return 0;
  }
}
