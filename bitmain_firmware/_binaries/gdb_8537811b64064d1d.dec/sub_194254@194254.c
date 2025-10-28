int __fastcall sub_194254(int result)
{
  if ( !result )
  {
    dword_487A08 = (int)off_46D5A4[0];
    sub_259880("Current language:  %s\n", (const char *)dword_487A00);
    sub_193FAC(0);
    sub_259880("Range checking:    %s\n", (const char *)dword_4879FC);
    sub_19405C(0, 1, 0, 0);
    sub_259880("Case sensitivity:  %s\n", (const char *)dword_4879F8);
    JUMPOUT(0x194128);
  }
  if ( (char **)dword_487A08 != off_46D5A4[0] )
  {
    dword_487A08 = (int)off_46D5A4[0];
    sub_259880("Current language:  %s\n", (const char *)dword_487A00);
    return sub_193FAC(0);
  }
  return result;
}
