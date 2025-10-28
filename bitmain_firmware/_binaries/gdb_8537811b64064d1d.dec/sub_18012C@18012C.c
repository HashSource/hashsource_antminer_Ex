int __fastcall sub_18012C(int a1, int a2)
{
  int result; // r0

  if ( !a2 )
    return sub_188150();
  result = (*(int (**)(void))(a1 + 344))();
  if ( !result )
    sub_94708("Asynchronous execution not supported on this target.");
  return result;
}
