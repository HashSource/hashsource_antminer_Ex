int __fastcall sub_1F62E8(const char *a1)
{
  char *v1; // r1

  if ( a1 )
    sub_94708("Garbage after \"show remote system-call-allowed\" command: `%s'", a1);
  if ( dword_489348 )
    v1 = "";
  else
    v1 = "not ";
  return sub_259880("Calling host system(3) call from target is %sallowed\n", v1, "", "not ");
}
