int __fastcall sub_1D36F8(int a1, int a2)
{
  int result; // r0

  sub_1D2E78();
  if ( !sub_232720(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4) )
    return sub_259880("Already at end of record list.\n");
  if ( !sub_232684() )
    return sub_259880("The current record target does not support this operation.\n");
  if ( !a2 )
    return sub_2326DC();
  result = sub_25A40C("Delete the log from this point forward and begin to record the running message at current PC?");
  if ( result )
    return sub_2326DC();
  return result;
}
