int __fastcall sub_1BD48(int a1, int a2, int a3)
{
  int v4; // r5
  const char *v5; // r1

  v4 = sub_15ECD4(a3, 24);
  if ( v4 >= 0 )
    LOWORD(v5) = -24180;
  else
    LOWORD(v5) = -24204;
  HIWORD(v5) = 52;
  sub_25A440(a2, v5, HIBYTE(v4) & 0x7F);
  sub_25A6E4("mask: ", a2);
  sub_1BCA4(a2, SBYTE2(v4));
  sub_25A6E4("flags: ", a2);
  return sub_1BCA4(a2, v4);
}
