loop do
  midi_note_on :c3 #midi note on 48
  sleep 0.01       #sleep 10 miliseconds
  midi_note_off :c3#midi note off 48
  sleep 3.0        #sleep 3 seconds
end
