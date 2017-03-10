# ThingMLConfuse
How to use libconfuse to read/write configuration files in ThingML

Install libconfuse (apt-get install xxx)

Download the ThingML compiler
cd ~
wget http://thingml.org/dist/ThingML2CLI.jar

Compile / Compile / Run

java -jar ~/ThingML2CLI.jar -c posixmt -s ConfuseTest.thingml -o .
make
./Test
