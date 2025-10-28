void __fastcall sub_1F76B4(int a1, int a2)
{
  int v4; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  _DWORD *v7; // r0

  v4 = (*(int (**)(void))(a1 + 20))();
  v5 = sub_92564(2063784, v4);
  v6 = v5;
  if ( dword_48935C )
  {
    v7 = (_DWORD *)sub_242FF0(v5);
    sub_2594D8(*v7, "notif: ack '%s'\n", *(const char **)(a1 + 4));
  }
  (*(void (__fastcall **)(int, int, int))(a1 + 8))(a1, a2, v4);
  (*(void (__fastcall **)(int, int, int))(a1 + 12))(a1, a2, v4);
  sub_92668(v6);
}
