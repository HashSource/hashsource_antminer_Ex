unsigned int __fastcall sub_4A530(int a1, unsigned int a2)
{
  unsigned int v2; // r1
  unsigned int v3; // r1
  unsigned int v5; // [sp+0h] [bp-14h]
  int v6; // [sp+4h] [bp-10h]
  unsigned int i; // [sp+Ch] [bp-8h]

  v5 = a2;
  sub_34514C(a1, a2);
  for ( i = v2; i; i = v3 )
  {
    v6 = v5;
    v5 = i;
    sub_34514C(v6, i);
  }
  return v5;
}
