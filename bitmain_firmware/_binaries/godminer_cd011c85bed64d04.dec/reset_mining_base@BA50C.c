int __fastcall reset_mining_base(int a1)
{
  int v2; // r0
  int v3; // r12
  int v4; // r2
  void *v5; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _BYTE v18[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "reset_mining_base",
    17,
    391,
    100,
    v18);
  (*(void (__fastcall **)(int))(a1 + 8))(a1);
  v3 = *(_DWORD *)(a1 + 656);
  v4 = *(_DWORD *)(a1 + 204);
  *(_BYTE *)(a1 + 153) = 0;
  *(_BYTE *)(a1 + 154) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  v5 = memset(*(void **)(a1 + 332), 0, v3 * v4);
  v6 = dev_ctrl((int)v5);
  (*(void (__fastcall **)(_DWORD))(v6 + 28))(*(_DWORD *)(a1 + 144));
  v7 = sleep(0xAu);
  v8 = dev_ctrl(v7);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v8 + 24))(
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 772),
    *(_DWORD *)(a1 + 784));
  v9 = sleep(1u);
  v10 = dev_ctrl(v9);
  (*(void (__fastcall **)(char *))(v10 + 16))("y_worse_phy");
  usleep(0x2710u);
  (*(void (__fastcall **)(int, int))(a1 + 76))(a1, 3125000);
  v11 = usleep(0x2710u);
  v12 = dev_ctrl(v11);
  (*(void (__fastcall **)(int))(v12 + 16))(3125000);
  v13 = usleep(0x2710u);
  v14 = dev_ctrl(v13);
  v15 = (*(int (__fastcall **)(_DWORD))(v14 + 36))(*(_DWORD *)(a1 + 144));
  v16 = dev_ctrl(v15);
  (*(void (__fastcall **)(_DWORD))(v16 + 4))(*(_DWORD *)(a1 + 144));
  return (*(int (__fastcall **)(int))(a1 + 4))(a1);
}
