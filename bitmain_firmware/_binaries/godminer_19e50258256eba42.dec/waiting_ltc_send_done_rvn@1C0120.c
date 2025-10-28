int __fastcall waiting_ltc_send_done_rvn(int a1, int a2, void *a3)
{
  int v7; // [sp+1Ch] [bp-10h] BYREF

  v7 = 0;
  memset(a3, 0, 268 * a2);
  (*(void (__fastcall **)(int, int, void *, int *, int, _DWORD))(a1 + 332))(a1, a2, a3, &v7, 2000, 0);
  return v7;
}
