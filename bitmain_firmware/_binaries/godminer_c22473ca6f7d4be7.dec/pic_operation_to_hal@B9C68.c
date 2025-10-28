int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int flash; // r4
  int v7; // r6
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r6
  int v13; // r3
  char v14[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 == 51 )
  {
    LOWORD(v12) = -10948;
    HIWORD(v12) = (unsigned int)&unk_16C33C >> 16;
    flash = pic1704_write_flash(*(_BYTE *)(v12 + 8 * a1), a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    LOWORD(v13) = -504;
    HIWORD(v13) = (unsigned int)"hm:%d" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v13, *(_DWORD *)(v12 + 8 * a1));
    V_UNLOCK();
    LOWORD(v9) = -14512;
    HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
    v10 = 430;
  }
  else
  {
    if ( a2 != 52 )
      return -1;
    LOWORD(v7) = -10948;
    HIWORD(v7) = (unsigned int)&unk_16C33C >> 16;
    flash = pic1704_read_flash(*(_BYTE *)(v7 + 8 * a1), a4, a3, HIWORD(a3));
    if ( flash == 1 )
      return flash;
    V_LOCK();
    LOWORD(v8) = -464;
    HIWORD(v8) = (unsigned int)" decode fail for chain %d.\n" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v8, *(_DWORD *)(v7 + 8 * a1));
    V_UNLOCK();
    LOWORD(v9) = -14512;
    HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
    v10 = 438;
  }
  LOWORD(v11) = -1132;
  HIWORD(v11) = (unsigned int)"_standard" >> 16;
  zlog(*v9, v11, 157, "pic_operation_to_hal", 20, v10, 100, v14);
  return flash;
}
