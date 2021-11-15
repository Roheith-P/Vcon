dim sapi
set sapi = CreateObject("sapi.spvoice")
Set sapi.Voice = sapi.GetVoices.Item(1)
sapi.Speak "Your dog name is Rokkie"