int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r2
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r1
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      V_LOCK();
      LOWORD(v8) = 8008;
      HIWORD(v8) = (unsigned int)&unk_141260 >> 16;
      logfmt_raw(v14, 0x1000u, 0, v8, v5);
      V_UNLOCK();
      LOWORD(v9) = -14512;
      HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v10) = 7824;
      HIWORD(v10) = (unsigned int)&unk_1411A8 >> 16;
      zlog(*v9, v10, 143, "data_enc", 8, 93, 100, v14);
      return 0;
    }
    else
    {
      LOWORD(v6) = 20168;
      HIWORD(v6) = (unsigned int)&unk_163DA8 >> 16;
      xxtea_encode(a1, a2 >> 2, v6 + 16 * a4);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v11) = 8064;
    HIWORD(v11) = (unsigned int)&unk_141298 >> 16;
    logfmt_raw(v14, 0x1000u, 0, v11, a3);
    V_UNLOCK();
    LOWORD(v12) = -14512;
    LOWORD(v13) = 7824;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v13) = (unsigned int)&unk_1411A8 >> 16;
    zlog(*v12, v13, 143, "data_enc", 8, 100, 100, v14);
    return 0;
  }
}
