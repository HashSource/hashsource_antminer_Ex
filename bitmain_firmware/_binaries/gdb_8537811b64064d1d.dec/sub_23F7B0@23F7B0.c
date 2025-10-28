int sub_23F7B0()
{
  int result; // r0

  if ( dword_4878EC == dword_475848 && qword_4878F0 == qword_47584C )
    sub_94708("No thread selected.");
  if ( sub_23DA9C(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 2) )
    sub_94708("The current thread has terminated");
  result = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_23F224)(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
  if ( result )
    sub_94708("Selected thread is running.");
  return result;
}
