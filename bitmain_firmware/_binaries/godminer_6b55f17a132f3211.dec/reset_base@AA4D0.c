int __fastcall reset_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r2

  v2 = (*(int (**)(void))(a1 + 56))();
  v3 = dev_ctrl(v2);
  (*(void (__fastcall **)(_DWORD))(v3 + 44))(*(_DWORD *)(a1 + 208));
  queue_clear(*(_DWORD *)(a1 + 808));
  v4 = *(_DWORD *)(a1 + 292);
  v5 = *(_DWORD *)(a1 + 800);
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  memset(*(void **)(a1 + 476), 0, v5 * v4);
  return 0;
}
