int __fastcall reset_base(int a1)
{
  int (**v1)(); // r0

  (*(void (__fastcall **)(int))(a1 + 60))(a1);
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[14])(*(_DWORD *)(a1 + 264));
  queue_clear(*(_DWORD *)(a1 + 896));
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 560) = 0;
  memset(*(void **)(a1 + 556), 0, *(_DWORD *)(a1 + 888) * *(_DWORD *)(a1 + 372));
  return 0;
}
