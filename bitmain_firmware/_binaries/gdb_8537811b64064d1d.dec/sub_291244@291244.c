void __fastcall __noreturn sub_291244(int a1, int a2)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v2 = sub_2945F0(a1, a2);
  v3 = sub_28D534(v2);
  v4 = sub_297064(v3);
  v5 = sub_29334C(v4);
  for ( dword_48AAA0 &= ~0x1000u; dword_48B6F4; v5 = sub_29292C(v5) )
    ;
  dword_48AAD0 = 0;
  longjmp((struct __jmp_buf_tag *)&unk_48FF38, 1);
}
