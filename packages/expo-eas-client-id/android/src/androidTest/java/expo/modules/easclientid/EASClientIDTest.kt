package expo.modules.easclientid

import androidx.test.internal.runner.junit4.AndroidJUnit4ClassRunner
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4ClassRunner::class)
class EASClientIDTest {
  @Test
  fun testCreatesStableUUID() {
    val context = getInstrumentation().targetContext
    val easClientId = EASClientID(context).uuid
    easClientId shouldNotBe null

    val easClientId2 = EASClientID(context).uuid
    easClientId shouldBeEqualTo easClientId2
  }
}
