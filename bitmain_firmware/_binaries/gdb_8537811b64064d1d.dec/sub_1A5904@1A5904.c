void __fastcall sub_1A5904(char *a1)
{
  if ( !a1 || !*a1 )
    sub_259880(
      "\"maintenance deprecate\" takes an argument,\n"
      "the command you want to deprecate, and optionally the replacement command\n"
      "enclosed in quotes.\n");
  sub_1A5730(a1, 1);
}
