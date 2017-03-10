# ThingMLConfuse

Using libconfuse to read/write configuration files in ThingML / C posix

###Installing libconfuse
On ubuntu / debian systems:
`sudo apt-get install libconfuse-dev`)

###Using the ThingML command line compiler

The latest version of the ThingML compiler can be downloaded with:
`wget http://thingml.org/dist/ThingML2CLI.jar`

To compile the example, run:
`java -jar ~/ThingML2CLI.jar -c posixmt -s ConfuseTest.thingml -o .`

(Java 8 or greater is required)

###Running the example

Compile with:
`make`

Run with:

`./Test`

Edit the test.conf file to change the configuration.