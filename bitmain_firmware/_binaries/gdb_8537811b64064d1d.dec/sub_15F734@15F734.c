int __fastcall sub_15F734(int a1)
{
  __int64 v1; // r0
  int result; // r0
  int v3; // r5
  int v4; // r0

  if ( !sub_22EB34(a1) )
    sub_94708("No registers.");
  if ( !sub_22EAE8() )
LABEL_13:
    sub_94708("No stack.", HIDWORD(v1));
  if ( !sub_22EA9C() )
    sub_94708("No memory.");
  if ( sub_24B5C4() < 0 )
    sub_23F7B0();
  if ( !dword_487758 )
  {
    v3 = dword_487D2C;
    v4 = sub_1DDBE4(0);
    dword_487758 = (int)sub_15D33C(v3, v4);
  }
  result = ((int (*)(void))loc_15F1C0)();
  if ( !result )
  {
    v1 = sub_94728(
           (int)"frame.c",
           1598,
           "%s: Assertion `%s' failed.",
           "frame_info* get_current_frame()",
           "current_frame != NULL");
    goto LABEL_13;
  }
  return result;
}
