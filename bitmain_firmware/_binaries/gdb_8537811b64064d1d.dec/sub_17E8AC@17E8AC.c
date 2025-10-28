int sub_17E8AC()
{
  int result; // r0

  if ( sub_98FA0(&dword_4878EC, &dword_475848) || (result = sub_23F1EC(dword_4878EC, dword_4878F0, dword_4878F4)) != 0 )
    sub_94708("Cannot execute this command without a live selected thread.");
  return result;
}
