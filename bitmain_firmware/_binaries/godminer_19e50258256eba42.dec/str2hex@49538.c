int __fastcall str2hex(int a1, int a2, int a3)
{
  char v7; // [sp+13h] [bp-9h]
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a3; i += 2 )
  {
    v7 = sub_4949C(*(_BYTE *)(a2 + i));
    *(_BYTE *)(a1 + i / 2) = (16 * v7) | sub_4949C(*(_BYTE *)(a2 + i + 1));
  }
  return a3 / 2;
}
