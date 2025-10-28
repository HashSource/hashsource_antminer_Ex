int __fastcall dhash_mining_reset_base(int a1)
{
  __int64 v1; // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  int v6; // r3
  _BYTE v9[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v10[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v11; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_2131EC((int)v10, *(int *)(a1 + 272));
  logfmt_raw(v9, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, "dhash mining reset!");
  V_UNLOCK();
  v1 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
         "gin_godminer-new/backend/backend_base.c",
         150,
         "dhash_mining_reset_base",
         23,
         706,
         80,
         v9);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 4))(a1, HIDWORD(v1));
  *(_BYTE *)(a1 + 278) = 0;
  *(_BYTE *)(a1 + 279) = 0;
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[8])(*(_DWORD *)(a1 + 264));
  sleep(0xAu);
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[7])(
    *(_DWORD *)(a1 + 264),
    *(_DWORD *)(a1 + 1036),
    *(_DWORD *)(a1 + 1056));
  sleep(1u);
  v4 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v4[14])(*(_DWORD *)(a1 + 264));
  v5 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v5[1])(*(_DWORD *)(a1 + 264));
  (*(void (__fastcall **)(int))(a1 + 16))(a1);
  return v6;
}
