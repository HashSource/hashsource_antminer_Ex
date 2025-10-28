void __fastcall sub_24ACC0(int a1, int a2)
{
  bool v4; // zf

  sub_243C5C();
  v4 = dword_48A8D0 == 0;
  if ( dword_48A8D0 )
    v4 = a2 == 0;
  if ( !v4 && !sub_25A40C("A trace is running already.  Start a new run? ") )
    sub_94708("New trace run not started.");
  sub_24A8A0(a1);
}
