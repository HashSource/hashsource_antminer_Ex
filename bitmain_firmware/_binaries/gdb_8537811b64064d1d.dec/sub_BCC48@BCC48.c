int sub_BCC48()
{
  int v0; // r0
  int *v1; // r0
  int result; // r0

  v0 = sub_22EAE8();
  if ( !v0 )
    sub_94708("The program has no auxiliary information now.");
  v1 = (int *)sub_242FB4(v0);
  result = sub_BCBA8(*v1, (int)&dword_4899A0);
  if ( result < 0 )
    sub_94708("No auxiliary vector found, or failed reading it.");
  if ( !result )
    sub_94708("Auxiliary vector is empty.");
  return result;
}
