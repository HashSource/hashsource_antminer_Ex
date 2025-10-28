int __fastcall sub_D17D4(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v6; // r6
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // [sp+4h] [bp-4h] BYREF

  v11 = a1;
  if ( !a1 )
    sub_51EC4("a breakpoint number");
  v6 = sub_5ADE4(&v11, a2, a3, a4);
  if ( !v6 )
    sub_94708("bad breakpoint number: '%s'", (const char *)a1);
  if ( !*v11 )
    sub_94708("Second argument (specified ignore-count) is missing.");
  v7 = sub_14CC94(v11);
  v8 = sub_26EB44(v7);
  v9 = sub_267284(v8, HIDWORD(v8));
  result = sub_D16EC(v6, v9, a2);
  if ( a2 )
    return sub_259F38((const char *)&word_356660);
  return result;
}
