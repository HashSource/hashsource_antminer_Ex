int __fastcall dhash_mining_reset_base(int a1)
{
  char *v2; // r1
  int v3; // r5
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  unsigned int v7; // r0
  int (**v8)(); // r0
  unsigned int v9; // r0
  int (**v10)(); // r0
  int v11; // r0
  int (**v12)(); // r0
  _DWORD v14[7]; // [sp+28h] [bp-1020h] BYREF
  int v15; // [sp+44h] [bp-1004h]
  char v16[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v14, v2, *(int *)(a1 + 248));
  LOWORD(v3) = 28252;
  HIWORD(v3) = (unsigned int)"ork failed,errcode %d" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v3);
  V_UNLOCK();
  LOWORD(v4) = 27564;
  HIWORD(v4) = (unsigned int)algn_176B94 >> 16;
  zlog(g_zc, v4, 153, "dhash_mining_reset_base", 23, 689, 80, v16);
  v5 = (*(int (__fastcall **)(int))(a1 + 4))(a1);
  *(_BYTE *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 254) = 0;
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[8])(*(_DWORD *)(a1 + 240));
  v7 = sleep(0xAu);
  v8 = dev_ctrl(v7);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v8[7])(
    *(_DWORD *)(a1 + 240),
    *(_DWORD *)(a1 + 980),
    *(_DWORD *)(a1 + 1000));
  v9 = sleep(1u);
  v10 = dev_ctrl(v9);
  v11 = ((int (__fastcall *)(_DWORD))v10[14])(*(_DWORD *)(a1 + 240));
  v12 = dev_ctrl(v11);
  ((void (__fastcall *)(_DWORD))v12[1])(*(_DWORD *)(a1 + 240));
  return (*(int (__fastcall **)(int))(a1 + 16))(a1);
}
