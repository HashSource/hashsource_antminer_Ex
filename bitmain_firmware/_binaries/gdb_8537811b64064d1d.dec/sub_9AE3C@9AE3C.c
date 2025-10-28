int __fastcall sub_9AE3C(int a1)
{
  int *v2; // r5
  int result; // r0
  struct obstack *v4; // r0

  v2 = (int *)sub_1CD174(a1, dword_477C60);
  if ( !v2 )
  {
    v2 = (int *)sub_930BC(1u, 4u);
    sub_1CD16C(a1, dword_477C60, v2);
  }
  result = *v2;
  if ( !*v2 )
  {
    v4 = (struct obstack *)sub_930BC(1u, 0xFF0u);
    *v2 = (int)v4;
    sub_9ADF8(v4);
    return *v2;
  }
  return result;
}
